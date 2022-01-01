use proconio::{fastout, input};

#[fastout]
fn main() {
    input! {
        a: u8,
        b: u8,
        c: u8
    }
    println!("{}", 7 * 3 - (a + b + c));
}
