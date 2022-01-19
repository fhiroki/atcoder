use proconio::{fastout, input};

#[fastout]
fn main() {
    input! {
        x: u8
    }
    if x < 40 {
        println!("{}", 40 - x);
    } else if x < 70 {
        println!("{}", 70 - x);
    } else if x < 90 {
        println!("{}", 90 - x);
    } else {
        println!("expert");
    }
}
