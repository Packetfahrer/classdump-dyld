/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:39:33 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /Applications/VoiceMemos.app/VoiceMemos
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


@protocol RCRecordingPlaybackTableViewCellDelegate <NSObject>
@required
-(void)playbackCell:(id)arg1 didRequestPlaybackState:(int)arg2;
-(void)playbackCell:(id)arg1 didScrubToTime:(double)arg2;
-(void)playbackCellShareButtonTapped:(id)arg1;
-(void)playbackCellEditButtonTapped:(id)arg1;
-(void)playbackCellDeleteButtonTapped:(id)arg1;
-(id)playbackCell:(id)arg1 didEndRetitingFromTitle:(id)arg2 toTitle:(id)arg3;
@end
