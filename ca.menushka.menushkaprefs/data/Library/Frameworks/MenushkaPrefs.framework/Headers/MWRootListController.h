#import <Preferences/PSListController.h>

@interface MWRootListController : PSListController
-(void)setSourceUrl:(NSString *)url;
-(void)showSource:(BOOL)value;
-(void)showDonate:(BOOL)value;
@end
