/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:36:22 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


@class NSString, SKUIArtwork, SKUICountdown, SKUIEditorialComponent, SKUILink;

@interface SKUIBrickItem : NSObject {

	NSString* _accessibilityLabel;
	SKUIArtwork* _artwork;
	long long _brickIdentifier;
	SKUICountdown* _countdown;
	SKUIEditorialComponent* _editorial;
	SKUILink* _link;

}

@property (nonatomic,readonly) NSString * accessibilityLabel;                   //@synthesize accessibilityLabel=_accessibilityLabel - In the implementation block
@property (nonatomic,readonly) SKUIArtwork * artwork;                           //@synthesize artwork=_artwork - In the implementation block
@property (nonatomic,readonly) long long brickIdentifier;                       //@synthesize brickIdentifier=_brickIdentifier - In the implementation block
@property (nonatomic,readonly) SKUICountdown * countdown;                       //@synthesize countdown=_countdown - In the implementation block
@property (nonatomic,readonly) SKUIEditorialComponent * editorial;              //@synthesize editorial=_editorial - In the implementation block
@property (nonatomic,readonly) SKUILink * link;                                 //@synthesize link=_link - In the implementation block
-(id)artwork;
-(id)description;
-(id)accessibilityLabel;
-(id)link;
-(id)initWithCustomPageContext:(id)arg1 ;
-(id)countdown;
-(id)initWithComponentContext:(id)arg1 ;
-(void)_setLinkItem:(id)arg1 ;
-(id)initWithBannerRoomContext:(id)arg1 ;
-(id)editorial;
-(long long)brickIdentifier;
-(void)_setLinkInfoWithLinkDictionary:(id)arg1 context:(id)arg2 ;
-(void).cxx_destruct;
@end
