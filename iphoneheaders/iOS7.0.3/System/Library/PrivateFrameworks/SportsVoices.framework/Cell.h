/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:45:44 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/SportsVoices.framework/SportsVoices
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <SportsVoices/SportsVoices-Structs.h>
#import <SportsVoices/InitFromPlistProtocol.h>

@class NSMutableDictionary, NSString;

@interface Cell : NSObject <InitFromPlistProtocol> {

	int _type;
	NSMutableDictionary* _attributes;

}

@property (readonly) int type;                                    //@synthesize type=_type - In the implementation block
@property (retain) NSString * content; 
@property (retain) NSString * pre; 
@property (retain) NSString * post; 
@property (retain) NSMutableDictionary * attributes;              //@synthesize attributes=_attributes - In the implementation block
+(id)cellWithContentString:(id)arg1 ;
+(id)instanceFromPlist:(id)arg1 ;
+(id)literalCellWithCell:(id)arg1 ;
+(id)cellWithCell:(id)arg1 ;
+(id)wildcard;
+(id)blank;
+(id)cell;
-(id)initFromPlist:(id)arg1 ;
-(id)initAsWildcard;
-(id)initAsBlank;
-(id)initWithContentString:(id)arg1 ;
-(id)initWithAttributesDictionary:(id)arg1 ;
-(id)pre;
-(id)post;
-(id)literalCell;
-(BOOL)isBlank;
-(id)overlayedOn:(id)arg1 ;
-(void)setPre:(id)arg1 ;
-(id)flattened;
-(void)setPost:(id)arg1 ;
-(BOOL)matches:(id)arg1 ;
-(id)attributeForKey:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(id)description;
-(int)type;
-(id)copyWithZone:(NSZoneRef)arg1 ;
-(BOOL)hasContent;
-(id)content;
-(id)attributes;
-(void)setAttributes:(id)arg1 ;
-(void)setAttribute:(id)arg1 forKey:(id)arg2 ;
-(void)setContent:(id)arg1 ;
@end
