/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:34:43 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


#import <MusicLibrary/MusicLibrary-Structs.h>
@interface ML3QuerySection : NSObject {

	unsigned _sectionIndex;
	NSRange _range;

}

@property (assign,nonatomic) NSRange range;                      //@synthesize range=_range - In the implementation block
@property (assign,nonatomic) unsigned sectionIndex;              //@synthesize sectionIndex=_sectionIndex - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(NSRange)range;
-(void)setRange:(NSRange)arg1 ;
-(id)initWithRange:(NSRange)arg1 sectionIndex:(unsigned)arg2 ;
-(unsigned)sectionIndex;
-(void)setSectionIndex:(unsigned)arg1 ;
@end
