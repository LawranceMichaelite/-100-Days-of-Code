let color = {
    r: 0,
    g: 0,
    b: 0
};

let color_sec = {
    r: 255,
    g: 214,
    b: 50
};

function setup() {
    createCanvas(1520, 610);
    angleMode(DEGREES);

}

function draw() {
    background(color.r, color.g, color.b);

    translate(760, 305);
    rotate(-90);

    let hr = hour();
    let min = minute();
    let sec = second();


    let Second_end = map(sec, 0, 59, 0, 360);
    let Minute_end = map(min, 0, 59, 0, 360);
    let Hour_end = map(hr % 12, 0, 12, 0, 360);


    strokeWeight(20);
    stroke(color_sec.r, color_sec.g, color_sec.b);
    arc(0, 0, 410, 410, 0, Second_end);

    push();
    strokeWeight(14);
    stroke(color_sec.r, color_sec.g, color_sec.b);
    rotate(Second_end);
    line(0, 0, 200, 0);
    pop();

    push();
    strokeWeight(14)
    stroke(100, 255, 150);
    rotate(Minute_end);
    line(0, 0, 100, 0);
    pop();

    push();
    strokeWeight(14);
    stroke(150, 100, 255);
    rotate(Hour_end);
    line(0, 0, 75, 0);
    pop();


}

function mouseWheel() {
    color.r = 255;
    color.g = 214;
    color.b = 50;

    color_sec.r = 0;
    color_sec.g = 0;
    color_sec.b = 0;
}

function mouseMoved() {
    color.r = 0;
    color.g = 0;
    color.b = 0;

    color_sec.r = 255;
    color_sec.g = 214;
    color_sec.b = 50;
}