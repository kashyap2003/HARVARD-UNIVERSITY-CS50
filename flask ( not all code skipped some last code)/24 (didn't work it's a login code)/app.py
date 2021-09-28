from flask import Flask, redirect, render_template, request, session
from flask_session import Session

app = Flask(__name__)
app.confug["SESSION_PERMANENT"] = False
app.confug["SESSION_TYPE"] = "filesystem"
Session(app)

@app.route("/")
def index():
    return render_template("index.html")

@app.route("/login")
def login():
    return render_template("login.html")