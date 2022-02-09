use proconio::{fastout, input};

#[fastout]
fn main() {
    input! {
        k: u64
    }
    let ans = format!("{:b}", k)
        .chars()
        .map(|c| if c == '1' { '2' } else { '0' })
        .collect::<String>();
    println!("{}", ans);
}
