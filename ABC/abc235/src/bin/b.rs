use proconio::{fastout, input};

#[fastout]
fn main() {
    input! {
        n: usize,
        h: [u32; n]
    }
    for i in 1..n {
        if h[i] <= h[i - 1] {
            println!("{}", h[i - 1]);
            return;
        }
    }
    println!("{}", h[n - 1]);
}
