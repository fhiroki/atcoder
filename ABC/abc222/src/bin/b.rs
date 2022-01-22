use proconio::{fastout, input};

#[fastout]
fn main() {
    input! {
        n: usize,
        p: u8,
        a: [u8; n],
    }
    println!("{}", a.iter().filter(|&x| *x < p).count());
}
