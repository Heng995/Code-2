from flask import Flask, render_template
app = Flask(__name__)
@app.route("/")
def index():
    return render_template("001.html")
@app.route("/yanwei")
def yanwei():
    return "Hello, Yanwei"
if __name__ == "__main__":
    app.run(debug=True)

#render_template將會找尋html檔案傳送給使用者