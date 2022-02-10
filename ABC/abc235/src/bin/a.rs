use proconio::{fastout, input};

#[fastout]
fn main() {
    input! {
        x: u32
    }
    let c = x % 10;
    let b = x / 10 % 10;
    let a = x / 100;
    println!("{}", a * 111 + b * 111 + c * 111);
}
