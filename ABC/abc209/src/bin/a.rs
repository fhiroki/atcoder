use proconio::{fastout, input};

#[fastout]
fn main() {
    input! {
        a: u8,
        b: u8,
    }
    println!("{}", b.checked_sub(a - 1).unwrap_or(0));
}
