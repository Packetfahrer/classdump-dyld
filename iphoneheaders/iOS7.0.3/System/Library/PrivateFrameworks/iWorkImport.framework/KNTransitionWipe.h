/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:47:49 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <iWorkImport/KNWipeBase.h>
#import <iWorkImport/KNFrameAnimator.h>

@interface KNTransitionWipe : KNWipeBase <KNFrameAnimator>
+(id)supportedTypes;
+(id)thumbnailImageNameForType:(int)arg1 ;
+(BOOL)isTransition;
+(id)defaultAttributes;
-(void)animationWillBeginWithContext:(id)arg1 ;
-(void)renderFrameWithContext:(id)arg1 ;
@end
