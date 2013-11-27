/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:47:55 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


@protocol TSKExporter <NSObject>
@optional
-(void)setBuildVersionHistory:(id)arg1;
-(void)setTypeUTI:(id)arg1;
-(id)documentSpecificTypeUTI;
-(id)typeUTI;
-(void)setSaveToURL:(id)arg1;
-(void)setUsePackageFormat:(BOOL)arg1;
-(BOOL)needsSupplementalFiles;
-(id)exportPathForOutputPath:(id)arg1;
-(id)savePanelMessage;
-(BOOL)isExportSupported;
-(void)setQuickLookThumbnail:(id)arg1;
-(id)progress;
-(void)setOptions:(id)arg1;

@required
-(id)initWithDocumentRoot:(id)arg1;
-(BOOL)exportToURL:(id)arg1 delegate:(id)arg2 error:(id*)arg3;
-(BOOL)isCancelled;
-(void)cancel;
-(void)quit;
-(id)progressContext;
-(void)setProgressContext:(id)arg1;
@end
