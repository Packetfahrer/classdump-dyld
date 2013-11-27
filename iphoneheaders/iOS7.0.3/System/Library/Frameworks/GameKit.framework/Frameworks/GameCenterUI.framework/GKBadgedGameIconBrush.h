/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:31:35 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/GameKit.framework/Frameworks/GameCenterUI.framework/GameCenterUI
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <GameCenterUI/GameCenterUI-Structs.h>
#import <GameCenterUI/GKThemeBrush.h>

@class GKThemeBrush;

@interface GKBadgedGameIconBrush : GKThemeBrush {

	GKThemeBrush* _badgeBrush;

}

@property (nonatomic,retain) GKThemeBrush * badgeBrush;              //@synthesize badgeBrush=_badgeBrush - In the implementation block
-(CGSize)sizeForInput:(id)arg1 ;
-(void)drawInRect:(CGRect)arg1 withContext:(CGContextRef)arg2 input:(id)arg3 ;
-(float)scaleForInput:(id)arg1 ;
-(id)badgeBrush;
-(void)setBadgeBrush:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(id)copyWithZone:(NSZoneRef)arg1 ;
@end
