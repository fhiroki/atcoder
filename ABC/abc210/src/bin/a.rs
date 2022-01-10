use proconio::{fastout, input};

#[fastout]
fn main() {
    input! {
        n: u32,
        a: u32,
        x: u32,
        y: u32
    }
    if n >= a {
        println!("{}", a * x + (n - a) * y);
    } else {
        println!("{}", n * x);
    }
}
