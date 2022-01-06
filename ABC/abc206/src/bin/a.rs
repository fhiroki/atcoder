use proconio::{fastout, input};

#[fastout]
fn main() {
    input! {
        mut n: f32
    }
    n = (n * 1.08).floor();
    if n == 206.0 {
        println!("so-so");
    } else if n < 206.0 {
        println!("Yay!");
    } else {
        println!(":(");
    }
}
