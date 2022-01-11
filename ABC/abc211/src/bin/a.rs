use proconio::{fastout, input};

#[fastout]
fn main() {
    input! {
        a: f32,
        b: f32,
    }
    println!("{}", (a - b) / 3.0 + b);
}
