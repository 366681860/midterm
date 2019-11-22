int main()
{
    int a,b,c,d,e,f,g,h,i,j,max;
    scanf("%d%d%d%d%d%d%d%d%d%d", &a, &b, &c, &d, &e, &f, &g, &h, &i, &j);
    if(a>=b&&a>=c&&a>=d&&a>=e&&a>=f&&a>=g&&a>=h&&a>=i&&a>=j)
    max=a;
    if(b>=a&&b>=c&&b>=d&&b>=e&&b>=f&&b>=g&&b>=h&&b>=i&&b>=j)
    max=b;
    if(c>=a&&c>=b&&c>=d&&c>=e&&c>=f&&c>=g&&c>=h&&c>=i&&c>=j)
    max=c;
    if(d>=a&&d>=b&&d>=c&&d>=e&&d>=f&&d>=g&&d>=h&&d>=i&&d>=j)
    max=d;
    if(e>=a&&e>=b&&e>=c&&e>=d&&e>=f&&e>=g&&e>=h&&e>=i&&e>=j)
    max=e;
    if(f>=a&&f>=b&&f>=c&&f>=d&&f>=e&&f>=g&&f>=h&&f>=i&&f>=j)
    max=f;
    if(g>=a&&g>=b&&g>=c&&g>=d&&g>=e&&g>=f&&g>=h&&g>=i&&g>=j)
    max=g;
    if(h>=a&&h>=b&&h>=c&&h>=d&&h>=e&&h>=f&&h>=g&&h>=i&&h>=j)
    max=h;
    if(i>=a&&i>=b&&i>=c&&i>=d&&i>=e&&i>=f&&i>=g&&i>=h&&i>=j)
    max=i;
    if(j>=a&&j>=b&&j>=c&&j>=d&&j>=e&&j>=f&&j>=g&&j>=h&&j>=i)
    max=j;
    printf("%d\n",max);
    getch();
    return 0;
}