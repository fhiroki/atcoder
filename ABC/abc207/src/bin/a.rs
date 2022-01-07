use proconio::{fastout, input};

#[fastout]
fn main() {
    input! {
        mut v: [u8; 3]
    }
    v.sort();
    println!("{}", v[1] + v[2]);
}
