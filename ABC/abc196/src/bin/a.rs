use proconio::{fastout, input};

#[fastout]
fn main() {
    input! {
        a: i16,
        b: i16,
        c: i16,
        d: i16,
    }
    println!("{}", b - c);
}
