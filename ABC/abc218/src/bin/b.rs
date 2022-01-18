use proconio::{fastout, input};

#[fastout]
fn main() {
    input! {
        p: [u8; 26]
    }
    let ans: String = p.iter().map(|&x| ('a' as u8 + x - 1) as char).collect();
    println!("{}", ans);
}
