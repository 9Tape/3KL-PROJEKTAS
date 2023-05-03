from . import db
from flask_login import UserMixin
from sqlalchemy.sql import func


class Problems(db.Model):
    id = db.Column(db.Integer, primary_key=True)
    name = db.Column(db.String(100))
    timeLimit = db.Column(db.Integer)
    memoryLimit = db.Column(db.Integer)

class User(db.Model, UserMixin):
    id = db.Column(db.Integer, primary_key=True)
    email = db.Column(db.String(150), unique=True)
    password = db.Column(db.String(150))
    first_name = db.Column(db.String(150))
    urole = db.Column(db.String(20))