use proconio::{fastout, input};

#[fastout]
fn main() {
    input! {
        n: u64,
    }
    for k in 1..=60 {
        if n < 2u64.pow(k) {
            println!("{}", k - 1);
            break;
        }
    }
}
