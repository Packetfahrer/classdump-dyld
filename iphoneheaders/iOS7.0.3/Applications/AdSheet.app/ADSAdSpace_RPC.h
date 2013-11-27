/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:37:56 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /Applications/AdSheet.app/AdSheet
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


@protocol ADSAdSpace_RPC
@required
-(void)_priv_cycleImpressionImmediately;
-(void)_remote_setShouldNotCycle:(BOOL)arg1;
-(void)_remote_reportPreRollImpression;
-(void)_remote_scheduleAd;
-(void)_remote_playbackStarted;
-(void)_remote_playbackPaused;
-(void)_remote_playbackResumed;
-(void)_remote_playbackFinishedForContentHash:(id)arg1;
-(void)_remote_playbackFailedForURL:(id)arg1;
-(void)_remote_cancelScheduledAd;
-(void)_priv_setServerURL:(id)arg1;
-(void)_remote_setupComplete;
-(void)_remote_close;
-(void)_remote_setIdentifier:(id)arg1;
-(void)_remote_setSection:(id)arg1;
-(void)_remote_setAuthenticationUserName:(id)arg1;
-(void)_remote_setVisibility:(int)arg1;
-(void)_remote_setFrame:(id)arg1;
-(void)_remote_bannerBeginActionFromFrame:(id)arg1 tapLocation:(id)arg2;
-(void)_remote_bannerRefuseAction;
-(void)_remote_bannerCancelAction;
-(void)_remote_presentInterstitialStoryboard;
-(void)_remote_interstitialRemovedFromSuperview;
@end
