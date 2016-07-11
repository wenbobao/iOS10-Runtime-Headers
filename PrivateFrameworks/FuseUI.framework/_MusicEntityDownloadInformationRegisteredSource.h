/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/FuseUI.framework/FuseUI
 */

@interface _MusicEntityDownloadInformationRegisteredSource : NSObject <NSCopying> {
    id /* block */  _downloadInformationBlock;
    MusicEntityValueContext * _entityValueContext;
    bool  _hasNonPurgableAsset;
    MPUContentItemIdentifierCollection * _identifierCollection;
    long long  _keepLocal;
    long long  _keepLocalStatus;
}

@property (nonatomic, copy) id /* block */ downloadInformationBlock;
@property (nonatomic, copy) MusicEntityValueContext *entityValueContext;
@property (nonatomic) bool hasNonPurgableAsset;
@property (nonatomic, copy) MPUContentItemIdentifierCollection *identifierCollection;
@property (nonatomic) long long keepLocal;
@property (nonatomic) long long keepLocalStatus;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id /* block */)downloadInformationBlock;
- (id)entityValueContext;
- (bool)hasNonPurgableAsset;
- (id)identifierCollection;
- (long long)keepLocal;
- (long long)keepLocalStatus;
- (void)setDownloadInformationBlock:(id /* block */)arg1;
- (void)setEntityValueContext:(id)arg1;
- (void)setHasNonPurgableAsset:(bool)arg1;
- (void)setIdentifierCollection:(id)arg1;
- (void)setKeepLocal:(long long)arg1;
- (void)setKeepLocalStatus:(long long)arg1;

@end