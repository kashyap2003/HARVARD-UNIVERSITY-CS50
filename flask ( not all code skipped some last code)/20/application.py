from flask import Flask, render_template, request

app = Flask(__name__)

REGISTRANTS = {}

SPORTS = [
    "cricket",
    "Football",
    "Vollyball",
    "Tennis",
    "basketball"
]

@app.route("/")
def index():
    return render_template("index.html", sports=SPORTS)

@app.route("/register", methods=["POST"])
def register():
    name = request.form.get("name")
    if not name:
        return render_template("error.html", message="Missing name")
    sport = request.form.get("sport")
    if not sport:
        return render_template("error.html", message="Missing sport")
    if sport not in SPORTS:
        return render_tempalte("error.html", message="Invalid sport")

    REGISTRANTS[name] = sport

    return render_template("success.html")