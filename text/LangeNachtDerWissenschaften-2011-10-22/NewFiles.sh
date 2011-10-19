#echo a >> $(date --date='+0 minute' +%H:%M:20).txt
#echo b >> $(date --date='+1 minute' +%H:%M:30).txt
#echo c >> $(date --date='+2 minutes' +%H:%M:40).txt
#echo d >> $(date --date='+3 minutes' +%H:%M:50).txt

echo a >> $(date --date='+0 minute' +%H:%M:%S)-a.txt
echo b >> $(date --date='+1 minute' +%H:%M:%S)-b.txt
echo c >> $(date --date='+2 minutes' +%H:%M:%S)-c.txt
echo d >> $(date --date='+3 minutes' +%H:%M:%S)-d.txt