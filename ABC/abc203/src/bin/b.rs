use proconio::{fastout, input};

#[fastout]
fn main() {
    input! {
        n: u32,
        k: u32,
    }
    let mut ans: u32 = 0;
    for i in 1..=n {
        for j in 1..=k {
            ans += format!("{}0{}", i, j).parse::<u32>().unwrap();
        }
    }
    println!("{}", ans)
}
