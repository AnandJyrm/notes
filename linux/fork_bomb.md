# What is a fork bomb?

A fork bomb is a DoS attack where a process continuously replicates itself and depletes the system resources

## Implementation

```bash
    :(){ :|: &};:
```

Replacing `:` with `fork_bomb`, this line can be expanded to:

```bash
fork_bomb() {
    fork_bomb | fork_bomb &
}
fork_bomb
```

## Prevention

Set a hard limit on number of processes/threads that can be created by a non root user.
Add `* hard nproc nnn` to `/etc/security/limits.conf` where `nnn` is the limit you want to apply.

