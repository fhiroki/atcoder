use proconio::{fastout, input};

#[fastout]
fn main() {
    input! {
        mut n: u8
    }
    if n >= 42 {
        n += 1;
    }
    println!("AGC{:03}", n);
}
