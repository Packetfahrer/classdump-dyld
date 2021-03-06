/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:52:33 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/GameKit.framework/Frameworks/GameCenterUI.framework/GameCenterUI
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <GameCenterUI/GameCenterUI-Structs.h>
#import <GameCenterUI/GKImageSource.h>

@class NSMapTable;

@interface GKLocalImageSource : GKImageSource {

	NSMapTable* _keysForSizes;

}

@property (nonatomic,retain) NSMapTable * keysForSizes;              //@synthesize keysForSizes=_keysForSizes - In the implementation block
-(id)keyForImageSize:(CGSize)arg1 ;
-(id)imageForImageSize:(CGSize)arg1 ;
-(id)keysForSizes;
-(void)setKeysForSizes:(id)arg1 ;
-(void)dealloc;
@end

