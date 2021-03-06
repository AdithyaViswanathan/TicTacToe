[mState]
Measure=NowPlaying

PlayerName=#NowPlayingPlayer#
PlayerType=State

RegExpSubstitute=1
Substitute="^0$":"play_arrow", "^1$":"pause", "^2$":"play_arrow"

OnChangeAction=[!UpdateMeter *] [!UpdateMeter *] [!Redraw]
TrackChangeAction=[!UpdateMeasure mTitleScrollReset] [!UpdateMeter *] [!UpdateMeter *] [!Redraw]

[mStatus]
Measure=NowPlaying

PlayerName=[mState]
PlayerType=Status

IfCondition=(mStatus=0) && ([#[#HidePlayer]]=1)
IfTrueAction=[!Hide]
IfFalseAction=[!Show]

[mTitle]
Measure=NowPlaying

PlayerName=[mState]
PlayerType=Title

RegExpSubstitute=1
Substitute="^$":"N/A", "^0$":"N/A"

[mArtist]
Measure=NowPlaying

PlayerName=[mState]
PlayerType=Artist

RegExpSubstitute=1
Substitute="^$":"N/A", "^0$":"N/A"

[mCover]
Measure=NowPlaying

PlayerName=[mState]
PlayerType=Cover

[mProgress]
Measure=NowPlaying

PlayerName=[mState]
PlayerType=Progress

OnChangeAction=[!UpdateMeter ProgressBar] [!Redraw]
Disabled=([#ProgressBarThickness]=0 ? 1 : 0)
