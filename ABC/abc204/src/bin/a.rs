use proconio::{fastout, input};

#[fastout]
fn main() {
    input! {
        x: u8,
        y: u8
    }
    if x == y {
        println!("{}", x);
    } else {
        println!("{}", 3 - (x + y));
    }
}
