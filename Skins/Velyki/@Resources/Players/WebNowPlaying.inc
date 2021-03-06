[mState]
Measure=Plugin
Plugin=WebNowPlaying

PlayerType=State

RegExpSubstitute=1
Substitute="^0$":"play_arrow", "^1$":"pause", "^2$":"play_arrow", "^3$":"replay"

OnChangeAction=[!UpdateMeter *] [!UpdateMeter *] [!Redraw]

[mStatus]
Measure=Plugin
Plugin=WebNowPlaying

PlayerType=Status

IfCondition=(mStatus=0) && ([#[#HidePlayer]]=1)
IfTrueAction=[!Hide]
IfFalseAction=[!Show]

[mTitle]
Measure=Plugin
Plugin=WebNowPlaying

PlayerType=Title

RegExpSubstitute=1
Substitute="^$":"N/A", "^0$":"N/A"

OnChangeAction=[!UpdateMeasure mTitleScrollReset] [!UpdateMeter *] [!UpdateMeter *] [!Redraw]

[mArtist]
Measure=Plugin
Plugin=WebNowPlaying

PlayerType=Artist

RegExpSubstitute=1
Substitute="^$":"N/A", "^0$":"N/A"

OnChangeAction=[!UpdateMeasure mTitleScrollReset] [!UpdateMeter *] [!UpdateMeter *] [!Redraw]

[mCoverURL]
Measure=Plugin
Plugin=WebNowPlaying

PlayerType=CoverWebAddress

OnChangeAction=[!UpdateMeasure mTitleScrollReset] [!UpdateMeter *] [!UpdateMeter *] [!Redraw]

[mCover]
Measure=Plugin
Plugin=WebNowPlaying

PlayerType=Cover
CoverPath=#@#Cover.png

[mProgress]
Measure=Plugin
Plugin=WebNowPlaying

PlayerType=Progress

OnChangeAction=[!UpdateMeter ProgressBar] [!Redraw]
Disabled=([#ProgressBarThickness]=0 ? 1 : 0)
