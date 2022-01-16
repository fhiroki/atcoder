use proconio::{fastout, input};

#[fastout]
fn main() {
    input! {
        v: f32
    }
    let x = v.floor();
    let y = ((v - x) * 10.0).ceil() as u8;
    if y <= 2 {
        println!("{}-", x);
    } else if y <= 6 {
        println!("{}", x);
    } else {
        println!("{}+", x);
    }
}
