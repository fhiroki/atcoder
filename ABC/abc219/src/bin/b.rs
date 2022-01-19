use proconio::{fastout, input};

#[fastout]
fn main() {
    input! {
        s: [String; 3],
        t: String
    }
    let ans = t
        .chars()
        .map(|c| {
            let i = c.to_digit(10).unwrap() as usize - 1;
            s[i].clone()
        })
        .collect::<Vec<String>>()
        .join("");
    println!("{}", ans);
}
