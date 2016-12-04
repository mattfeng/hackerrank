# Some Notes on Python

## `datetime`

```python

import datetime

# parse time from string
datetime.datetime.strptime(time, '%I:%M:%S %p')

# format datetime as string
datetime.datetime.strftime(time, '%H:%M:%S')

# %H is for 24 hour time
# %I is for 12 hour time, combined with %p for AM/PM
```

## RCIRC, LCIRC

```python

a = [1, 2, 3, 4, 5]
r = a[-k:] + a[:-k] # R-CIRC(K)
l = a[k:] + a[:k] # L-CIRC(K)
```

