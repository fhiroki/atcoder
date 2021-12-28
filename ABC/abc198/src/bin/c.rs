use proconio::{fastout, input};

#[fastout]
fn main() {
    input! {
        r: f64,
        x: f64,
        y: f64
    }
    let d: f64 = (x * x + y * y).sqrt();
    if r > d {
        println!("2");
    } else {
        println!("{}", (d / r).ceil());
    }
}
