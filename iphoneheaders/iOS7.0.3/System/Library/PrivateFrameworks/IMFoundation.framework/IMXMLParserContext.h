/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:34:16 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/IMFoundation.framework/IMFoundation
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


@class NSData, NSString, NSArray;

@interface IMXMLParserContext : NSObject {

	NSData* _inContentAsData;

}

@property (readonly) NSData * inContentAsData;                 //@synthesize inContentAsData=_inContentAsData - In the implementation block
@property (readonly) NSString * name; 
@property (readonly) NSArray * resultsForLogging; 
-(void)dealloc;
-(id)name;
-(void)reset;
-(id)resultsForLogging;
-(id)inContentAsData;
-(id)initWithContentAsData:(id)arg1 ;
-(id)initWithContent:(id)arg1 ;
-(id)inContent;
@end
