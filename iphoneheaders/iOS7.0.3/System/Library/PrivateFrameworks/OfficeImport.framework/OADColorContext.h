/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:34:59 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


@protocol OADColorPalette;
@class OADColorScheme, OADColorMap, ;

@interface OADColorContext : NSObject {

	OADColorScheme* mScheme;
	OADColorMap* mMap;
	<OADColorPalette>* mPalette;

}

@property (nonatomic,readonly) OADColorScheme * scheme; 
@property (nonatomic,readonly) OADColorMap * map; 
@property (nonatomic,readonly) <OADColorPalette> * palette; 
+(id)colorContextWithScheme:(id)arg1 map:(id)arg2 palette:(id)arg3 ;
-(void)dealloc;
-(id)scheme;
-(id)map;
-(id)initWithScheme:(id)arg1 map:(id)arg2 palette:(id)arg3 ;
-(id)palette;
@end
