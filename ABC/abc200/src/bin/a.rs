use proconio::{fastout, input};

#[fastout]
fn main() {
    input! {
        n: f64
    }
    println!("{}", (n / 100.0).ceil())
}
