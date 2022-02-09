use proconio::{fastout, input};

#[fastout]
fn main() {
    input! {
        t: u64
    }
    println!("{}", f(f(f(t) + t) + f(f(t))));
}

fn f(x: u64) -> u64 {
    x * x + 2 * x + 3
}
