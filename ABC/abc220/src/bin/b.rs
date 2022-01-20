use proconio::{fastout, input};

#[fastout]
fn main() {
    input! {
        k: u64,
        a: String,
        b: String,
    }
    let _a = a.chars().rev().enumerate().fold(0, |mut acc, (i, c)| {
        acc += k.pow(i as u32) * c.to_digit(10).unwrap() as u64;
        acc
    });
    let _b = b.chars().rev().enumerate().fold(0, |mut acc, (i, c)| {
        acc += k.pow(i as u32) * c.to_digit(10).unwrap() as u64;
        acc
    });
    println!("{}", _a * _b);
}
