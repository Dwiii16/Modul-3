seconds = int(input())

days = seconds // 86400
seconds = seconds % 86400

hours = seconds // 3600
seconds = seconds % 3600

minutes = seconds // 60
seconds = seconds % 60

if days > 0:
    print(f"{days} hari {hours:02d}:{minutes:02d}:{seconds:02d}")
else:
    print(f"{hours:02d}:{minutes:02d}:{seconds:02d}")