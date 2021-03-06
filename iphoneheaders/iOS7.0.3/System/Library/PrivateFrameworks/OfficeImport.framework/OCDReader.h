/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:56:13 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/


@protocol OCCancelDelegate, OCDReaderDelegate;
@class CPImportTracing, NSString, NSData, NSError;

@interface OCDReader : NSObject {

	<OCCancelDelegate>* mCancelDelegate;
	<OCDReaderDelegate>* mDelegate;
	BOOL mIsThumbnail;
	CPImportTracing* mTracing;
	NSString* mFileName;
	NSData* mData;
	NSError* mStartError;

}

@property (nonatomic,retain) NSString * fileName; 
@property (nonatomic,retain) NSData * data; 
@property (nonatomic,retain) NSError * startError; 
@property (nonatomic,retain) <OCCancelDelegate> * cancelDelegate; 
@property (assign,nonatomic) <OCDReaderDelegate> * delegate; 
@property (assign,nonatomic) BOOL isThumbnail; 
@property (nonatomic,retain) CPImportTracing * tracing; 
-(void)dealloc;
-(void)setDelegate:(id)arg1 ;
-(id)delegate;
-(id)data;
-(void)setData:(id)arg1 ;
-(BOOL)start;
-(id)fileName;
-(BOOL)isThumbnail;
-(void)setIsThumbnail:(BOOL)arg1 ;
-(id)initWithCancelDelegate:(id)arg1 tracing:(id)arg2 ;
-(id)read;
-(id)cancelDelegate;
-(void)setStartErrorMessageFromException:(id)arg1 ;
-(id)tracing;
-(BOOL)verifyFileFormat;
-(bool)isBinaryReader;
-(void)setCancelDelegate:(id)arg1 ;
-(void)setTracing:(id)arg1 ;
-(void)setStartError:(id)arg1 ;
-(id)startError;
-(void)setFileName:(id)arg1 ;
@end

