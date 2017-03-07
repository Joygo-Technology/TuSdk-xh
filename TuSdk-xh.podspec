#
# Be sure to run `pod lib lint TuSdk-xh.podspec' to ensure this is a
# valid spec before submitting.
#
# Any lines starting with a # are optional, but their use is encouraged
# To learn more about a Podspec see http://guides.cocoapods.org/syntax/podspec.html
#

Pod::Spec.new do |s|
  s.name             = 'TuSdk-xh'
  s.version          = '0.1.0'
  s.summary          = 'A short description of TuSdk-xh.'

# This description is used to generate tags and improve search results.
#   * Think: What does it do? Why did you write it? What is the focus?
#   * Try to keep it short, snappy and to the point.
#   * Write the description between the DESC delimiters below.
#   * Finally, don't worry about the indent, CocoaPods strips it!

  s.description      = <<-DESC
TODO: Add long description of the pod here.
                       DESC

  s.homepage         = 'https://github.com/Joygo-Technology/TuSdk-xh'
  # s.screenshots     = 'www.example.com/screenshots_1', 'www.example.com/screenshots_2'
  s.license          = { :type => 'MIT', :file => 'LICENSE' }
  s.author           = { 'lee' => 'nemoleo@yeah.net' }
  s.source           = { :git => 'https://github.com/Joygo-Technology/TuSdk-xh.git', :tag => s.version.to_s }
  # s.social_media_url = 'https://twitter.com/<TWITTER_USERNAME>'

  s.ios.deployment_target = '8.0'

  s.resource = 'TuSdk-xh/Assets/*.{bundle}'

  #s.source_files = 'TuSdk-xh/Classes/*.{h,m}'

  s.ios.vendored_frameworks  = 'TuSdk-xh/Frameworks/*.framework'
  
  # s.resource_bundles = {
  #   'TuSdk-xh' => ['TuSdk-xh/Assets/*.png']
  # }

  s.user_target_xcconfig = {
    'OTHER_LINKER_FLAGS' => '-ObjC',
    'CLANG_CXX_LIBRARY' => 'libc++',
  }

  # s.public_header_files = 'Pod/Classes/**/*.h'
  s.frameworks = 'Photos','Accelerate','AVFoundation','VideoToolbox','AudioToolbox'
  s.libraries = 'c++'
  
  s.dependency 'GPUImage', '~> 0.1.7'

end
