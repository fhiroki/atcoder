use proconio::{fastout, input};

#[fastout]
fn main() {
    input! {
        n: usize,
        mut s: [String; n]
    }

    let mut res: u64 = 1;
    for i in 0..n {
        if s[i] == "OR" {
            res += 2u64.pow(i as u32 + 1);
        }
    }

    println!("{}", res);
}
