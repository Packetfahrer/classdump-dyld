/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:54:22 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/CalDAV.framework/CalDAV
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <CoreDAV/CoreDAVTask.h>

@class NSSet;

@interface CalDAVMkcalendarTask : CoreDAVTask {

	NSSet* _setElements;

}

@property (assign,nonatomic,@dynamic) <CalDAVMkcalendarTaskDelegate><CoreDAVTaskDelegate> * delegate; 
@property (retain) NSSet * setElements;                                                                            //@synthesize setElements=_setElements - In the implementation block
-(void)dealloc;
-(id)description;
-(id)initWithURL:(id)arg1 ;
-(void)setSupportForEvents:(BOOL)arg1 tasks:(BOOL)arg2 ;
-(void)setSetElements:(id)arg1 ;
-(id)setElements;
-(void)finishCoreDAVTaskWithError:(id)arg1 ;
-(id)copyDefaultParserForContentType:(id)arg1 ;
-(id)initWithPropertiesToSet:(id)arg1 atURL:(id)arg2 ;
-(id)requestBody;
-(id)httpMethod;
@end
