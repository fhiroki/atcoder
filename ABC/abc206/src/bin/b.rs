use proconio::{fastout, input};

#[fastout]
fn main() {
    input! {
        n: u64
    }
    for x in 1..1000000 {
        if x * (x + 1) >= 2 * n {
            println!("{}", x);
            return;
        }
    }
}
