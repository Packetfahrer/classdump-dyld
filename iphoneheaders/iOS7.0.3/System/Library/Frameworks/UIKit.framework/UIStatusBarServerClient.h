/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:32:32 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


@protocol UIStatusBarServerClient
@required
-(void)statusBarServer:(id)arg1 didReceiveStatusBarData:(const /*function pointer*/ void**)arg2 withActions:(int)arg3;
-(void)statusBarServer:(id)arg1 didReceiveStyleOverrides:(int)arg2;
-(void)statusBarServer:(id)arg1 didReceiveGlowAnimationState:(BOOL)arg2 forStyle:(int)arg3;
-(void)statusBarServer:(id)arg1 didReceiveDoubleHeightStatusString:(id)arg2 forStyle:(int)arg3;
@end
